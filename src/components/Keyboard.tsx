import React from "react";

export default function Keyboard({ children }: React.PropsWithChildren) {
  return (
    <kbd className="bg-gray-200 font-mono px-1 py-0.5 rounded-sm">
      {children}
    </kbd>
  );
}
