let check: string | number;
// check = "krusna"
// check = 2;

type User = {
  name: string;
  id: string;
};

type Admin = {
  name: number;
  id: string;
};

const logginUser: User | Admin = { name: "name", id: "slj" };

// const arr: Array< string | number> = [1, 2, "hello"];
// or //
const arr: ( string | number)[] = [1, 2, "hello"];

export {};
