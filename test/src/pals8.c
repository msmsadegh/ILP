/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include <stdio.h>

typedef int bool;
typedef char msg_t;
typedef int port_t;
void ABC(bool arg);
msg_t nomsg = (char)-1;
char r1;
port_t p1;
char p1_old;
char p1_new;
char id1;
char st1;
msg_t send1;
bool mode1;
bool alive1;
port_t p2;
char p2_old;
char p2_new;
char id2;
char st2;
msg_t send2;
bool mode2;
bool alive2;
port_t p3;
char p3_old;
char p3_new;
char id3;
char st3;
msg_t send3;
bool mode3;
bool alive3;
port_t p4;
char p4_old;
char p4_new;
char id4;
char st4;
msg_t send4;
bool mode4;
bool alive4;
port_t p5;
char p5_old;
char p5_new;
char id5;
char st5;
msg_t send5;
bool mode5;
bool alive5;
port_t p6;
char p6_old;
char p6_new;
char id6;
char st6;
msg_t send6;
bool mode6;
bool alive6;
void node1(void) {
  msg_t m1;

  {
    m1 = nomsg;
    if (mode1) {
      if ((int)r1 == 255) {
        r1 = (char)5;
      }
      r1 = (char)((int)r1 + 1);
      m1 = p6_old;
      p6_old = nomsg;
      if ((int)m1 != (int)nomsg) {
        if (alive1) {
          if ((int)m1 > (int)id1) {
            send1 = m1;
          } else {
            if ((int)m1 == (int)id1) {
              st1 = (char)1;
            }
          }
        } else {
          send1 = m1;
        }
      }
      mode1 = 0;
    } else {
      if (alive1) {
        if ((int)send1 != (int)nomsg) {
          if ((int)p1_new == (int)nomsg) {
            p1_new = send1;
          } else {
            p1_new = p1_new;
          }
        } else {
          p1_new = p1_new;
        }
      }
      mode1 = 1;
    }
    return;
  }
}
void node2(void) {
  msg_t m2;

  {
    m2 = nomsg;
    if (mode2) {
      m2 = p1_old;
      p1_old = nomsg;
      if ((int)m2 != (int)nomsg) {
        if (alive2) {
          if ((int)m2 > (int)id2) {
            send2 = m2;
          } else {
            if ((int)m2 == (int)id2) {
              st2 = (char)1;
            }
          }
        } else {
          send2 = m2;
        }
      }
      mode2 = 0;
    } else {
      if (alive2) {
        if ((int)send2 != (int)nomsg) {
          if ((int)p2_new == (int)nomsg) {
            p2_new = send2;
          } else {
            p2_new = p2_new;
          }
        } else {
          p2_new = p2_new;
        }
      } else {
        if ((int)send2 != (int)id2) {
          if ((int)send2 != (int)nomsg) {
            if ((int)p2_new == (int)nomsg) {
              p2_new = send2;
            } else {
              p2_new = p2_new;
            }
          } else {
            p2_new = p2_new;
          }
        }
      }
      mode2 = 1;
    }
    return;
  }
}
void node3(void) {
  msg_t m3;

  {
    m3 = nomsg;
    if (mode3) {
      m3 = p2_old;
      p2_old = nomsg;
      if ((int)m3 != (int)nomsg) {
        if (alive3) {
          if ((int)m3 > (int)id3) {
            send3 = m3;
          } else {
            if ((int)m3 == (int)id3) {
              st3 = (char)1;
            }
          }
        } else {
          send3 = m3;
        }
      }
      mode3 = 0;
    } else {
      if (alive3) {
        if ((int)send3 != (int)nomsg) {
          if ((int)p3_new == (int)nomsg) {
            p3_new = send3;
          } else {
            p3_new = p3_new;
          }
        } else {
          p3_new = p3_new;
        }
      } else {
        if ((int)send3 != (int)id3) {
          if ((int)send3 != (int)nomsg) {
            if ((int)p3_new == (int)nomsg) {
              p3_new = send3;
            } else {
              p3_new = p3_new;
            }
          } else {
            p3_new = p3_new;
          }
        }
      }
      mode3 = 1;
    }
    return;
  }
}
void node4(void) {
  msg_t m4;

  {
    m4 = nomsg;
    if (mode4) {
      m4 = p3_old;
      p3_old = nomsg;
      if ((int)m4 != (int)nomsg) {
        if (alive4) {
          if ((int)m4 > (int)id4) {
            send4 = m4;
          } else {
            if ((int)m4 == (int)id4) {
              st4 = (char)1;
            }
          }
        } else {
          send4 = m4;
        }
      }
      mode4 = 0;
    } else {
      if (alive4) {
        if ((int)send4 != (int)nomsg) {
          if ((int)p4_new == (int)nomsg) {
            p4_new = send1;
          } else {
            p4_new = p4_new;
          }
        } else {
          p4_new = p4_new;
        }
      } else {
        if ((int)send4 != (int)id4) {
          if ((int)send4 != (int)nomsg) {
            if ((int)p4_new == (int)nomsg) {
              p4_new = send1;
            } else {
              p4_new = p4_new;
            }
          } else {
            p4_new = p4_new;
          }
        }
      }
      mode4 = 1;
    }
    return;
  }
}
void node5(void) {
  msg_t m5;

  {
    m5 = nomsg;
    if (mode5) {
      m5 = p4_old;
      p4_old = nomsg;
      if ((int)m5 != (int)nomsg) {
        if (alive5) {
          if ((int)m5 > (int)id5) {
            send5 = m5;
          } else {
            if ((int)m5 == (int)id5) {
              st5 = (char)1;
            }
          }
        } else {
          send5 = m5;
        }
      }
      mode5 = 0;
    } else {
      if (alive5) {
        if ((int)send5 != (int)nomsg) {
          if ((int)p5_new == (int)nomsg) {
            p5_new = send5;
          } else {
            p5_new = p5_new;
          }
        } else {
          p5_new = p5_new;
        }
      } else {
        if ((int)send5 != (int)id5) {
          if ((int)send5 != (int)nomsg) {
            if ((int)p5_new == (int)nomsg) {
              p5_new = send5;
            } else {
              p5_new = p5_new;
            }
          } else {
            p5_new = p5_new;
          }
        }
      }
      mode5 = 1;
    }
    return;
  }
}
void node6(void) {
  msg_t m6;

  {
    m6 = nomsg;
    if (mode6) {
      m6 = p5_old;
      p5_old = nomsg;
      if ((int)m6 != (int)nomsg) {
        if (alive6) {
          if ((int)m6 > (int)id6) {
            send6 = m6;
          } else {
            if ((int)m6 == (int)id6) {
              st6 = (char)1;
            }
          }
        } else {
          send6 = m6;
        }
      }
      mode6 = 0;
    } else {
      if (alive6) {
        if ((int)send6 != (int)nomsg) {
          if ((int)p6_new == (int)nomsg) {
            p6_new = send6;
          } else {
            p6_new = p6_new;
          }
        } else {
          p6_new = p6_new;
        }
      } else {
        if ((int)send6 != (int)id6) {
          if ((int)send6 != (int)nomsg) {
            if ((int)p6_new == (int)nomsg) {
              p6_new = send6;
            } else {
              p6_new = p6_new;
            }
          } else {
            p6_new = p6_new;
          }
        }
      }
      mode6 = 1;
    }
    return;
  }
}
int init(void) {
  int tmp;

  {
    if ((int)r1 == 0) {
      if (((((alive1 + alive2) + alive3) + alive4) + alive5) + alive6 >= 1) {
        if ((int)id1 >= 0) {
          if ((int)st1 == 0) {
            if ((int)send1 == (int)id1) {
              if (mode1 == 0) {
                if ((int)id2 >= 0) {
                  if ((int)st2 == 0) {
                    if ((int)send2 == (int)id2) {
                      if (mode2 == 0) {
                        if ((int)id3 >= 0) {
                          if ((int)st3 == 0) {
                            if ((int)send3 == (int)id3) {
                              if (mode3 == 0) {
                                if ((int)id4 >= 0) {
                                  if ((int)st4 == 0) {
                                    if ((int)send4 == (int)id4) {
                                      if (mode4 == 0) {
                                        if ((int)id5 >= 0) {
                                          if ((int)st5 == 0) {
                                            if ((int)send5 == (int)id5) {
                                              if (mode5 == 0) {
                                                if ((int)id6 >= 0) {
                                                  if ((int)st6 == 0) {
                                                    if ((int)send6 ==
                                                        (int)id6) {
                                                      if (mode6 == 0) {
                                                        if ((int)id1 !=
                                                            (int)id2) {
                                                          if ((int)id1 !=
                                                              (int)id3) {
                                                            if ((int)id1 !=
                                                                (int)id4) {
                                                              if ((int)id1 !=
                                                                  (int)id5) {
                                                                if ((int)id1 !=
                                                                    (int)id6) {
                                                                  if ((int)
                                                                          id2 !=
                                                                      (int)
                                                                          id3) {
                                                                    if ((int)
                                                                            id2 !=
                                                                        (int)
                                                                            id4) {
                                                                      if ((int)
                                                                              id2 !=
                                                                          (int)
                                                                              id5) {
                                                                        if ((int)
                                                                                id2 !=
                                                                            (int)
                                                                                id6) {
                                                                          if ((int)
                                                                                  id3 !=
                                                                              (int)
                                                                                  id4) {
                                                                            if ((int)
                                                                                    id3 !=
                                                                                (int)
                                                                                    id5) {
                                                                              if ((int)
                                                                                      id3 !=
                                                                                  (int)
                                                                                      id6) {
                                                                                if ((int)
                                                                                        id4 !=
                                                                                    (int)
                                                                                        id5) {
                                                                                  if ((int)
                                                                                          id4 !=
                                                                                      (int)
                                                                                          id6) {
                                                                                    if ((int)
                                                                                            id5 !=
                                                                                        (int)
                                                                                            id6) {
                                                                                      tmp =
                                                                                          1;
                                                                                    } else {
                                                                                      tmp =
                                                                                          0;
                                                                                    }
                                                                                  } else {
                                                                                    tmp =
                                                                                        0;
                                                                                  }
                                                                                } else {
                                                                                  tmp =
                                                                                      0;
                                                                                }
                                                                              } else {
                                                                                tmp =
                                                                                    0;
                                                                              }
                                                                            } else {
                                                                              tmp =
                                                                                  0;
                                                                            }
                                                                          } else {
                                                                            tmp =
                                                                                0;
                                                                          }
                                                                        } else {
                                                                          tmp =
                                                                              0;
                                                                        }
                                                                      } else {
                                                                        tmp = 0;
                                                                      }
                                                                    } else {
                                                                      tmp = 0;
                                                                    }
                                                                  } else {
                                                                    tmp = 0;
                                                                  }
                                                                } else {
                                                                  tmp = 0;
                                                                }
                                                              } else {
                                                                tmp = 0;
                                                              }
                                                            } else {
                                                              tmp = 0;
                                                            }
                                                          } else {
                                                            tmp = 0;
                                                          }
                                                        } else {
                                                          tmp = 0;
                                                        }
                                                      } else {
                                                        tmp = 0;
                                                      }
                                                    } else {
                                                      tmp = 0;
                                                    }
                                                  } else {
                                                    tmp = 0;
                                                  }
                                                } else {
                                                  tmp = 0;
                                                }
                                              } else {
                                                tmp = 0;
                                              }
                                            } else {
                                              tmp = 0;
                                            }
                                          } else {
                                            tmp = 0;
                                          }
                                        } else {
                                          tmp = 0;
                                        }
                                      } else {
                                        tmp = 0;
                                      }
                                    } else {
                                      tmp = 0;
                                    }
                                  } else {
                                    tmp = 0;
                                  }
                                } else {
                                  tmp = 0;
                                }
                              } else {
                                tmp = 0;
                              }
                            } else {
                              tmp = 0;
                            }
                          } else {
                            tmp = 0;
                          }
                        } else {
                          tmp = 0;
                        }
                      } else {
                        tmp = 0;
                      }
                    } else {
                      tmp = 0;
                    }
                  } else {
                    tmp = 0;
                  }
                } else {
                  tmp = 0;
                }
              } else {
                tmp = 0;
              }
            } else {
              tmp = 0;
            }
          } else {
            tmp = 0;
          }
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
    return (tmp);
  }
}
int check(void) {
  int tmp;

  {
    if ((((((int)st1 + (int)st2) + (int)st3) + (int)st4) + (int)st5) +
            (int)st6 <=
        1) {
      if ((int)r1 < 6) {
        tmp = 1;
      } else {
        if ((((((int)st1 + (int)st2) + (int)st3) + (int)st4) + (int)st5) +
                (int)st6 ==
            1) {
          tmp = 1;
        } else {
          tmp = 0;
        }
      }
    } else {
      tmp = 0;
    }
    return (tmp);
  }
}

void ABC(bool arg) {

  {
    if (!arg) {
      printf("");
    }
    return;
  }
}

int main() {
  int c1;
  int i2;

  {
    c1 = 0;
    i2 = init();
    p1_old = nomsg;
    p1_new = nomsg;
    p2_old = nomsg;
    p2_new = nomsg;
    p3_old = nomsg;
    p3_new = nomsg;
    p4_old = nomsg;
    p4_new = nomsg;
    p5_old = nomsg;
    p5_new = nomsg;
    p6_old = nomsg;
    p6_new = nomsg;
    i2 = 0;
    while (i2 < 1) {
      node1();
      node2();
      node3();
      node4();
      node5();
      node6();
      p1_old = p1_new;
      p1_new = nomsg;
      p2_old = p2_new;
      p2_new = nomsg;
      p3_old = p3_new;
      p3_new = nomsg;
      p4_old = p4_new;
      p4_new = nomsg;
      p5_old = p5_new;
      p5_new = nomsg;
      p6_old = p6_new;
      p6_new = nomsg;
      c1 = check();
      ABC(c1);
      i2 = i2 + 1;
    }
    return (0);
  }
}
