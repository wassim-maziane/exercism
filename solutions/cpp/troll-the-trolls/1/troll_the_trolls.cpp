namespace hellmath {

enum class AccountStatus { troll, guest, user, mod };

enum class Action { read, write, remove };
bool display_post(AccountStatus poster, AccountStatus viewer) {
  return poster != AccountStatus::troll or viewer == AccountStatus::troll;
}
bool permission_check(Action action, AccountStatus type) {
  switch (action) {
  case Action::read:
    return true;
  case Action::write:
    return type == AccountStatus::user or type == AccountStatus::troll;
  case Action::remove:
    return type == AccountStatus::mod;
  }
}

bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
  return player1 != AccountStatus::troll or player2 != AccountStatus::troll;
}
bool has_priority(AccountStatus player1, AccountStatus player2) {
  switch (player1) {
  case AccountStatus::mod:
    return player2 != AccountStatus::mod;
  case AccountStatus::user:
    return player2 == AccountStatus::guest or player2 == AccountStatus::troll;
  case AccountStatus::guest:
    return player2 == AccountStatus::troll;
  case AccountStatus::troll:
    return false;
  }
}

} // namespace hellmath
