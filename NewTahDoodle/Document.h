//
//  Document.h
//  NewTahDoodle
//
//  Created by Сулейманов Алексей on 22/04/2019.
//  Copyright © 2019 alex. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument <NSTableViewDataSource> {
  NSMutableArray *todoItems;
  IBOutlet NSTableView *itemTableView;
  
}

- (IBAction)createNewItem:(id)sender);

@end

