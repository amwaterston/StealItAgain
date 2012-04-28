//
//  AppDelegate.h
//  StealItAgain
//
//  Created by Alexander Waterston on 27/04/2012.
//  Copyright (c) 2012 Haiku Interactive. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include "psmove.h"
#import "dataDAO.h"

@interface AppDelegate : NSObject <NSApplicationDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    
    NSMutableArray *moveArray;
    int controllers_connected;
    DataDAO *data;
    
    NSArray *powers;
    
    int timeT;
    BOOL viewLoaded;
}

@property (assign) IBOutlet NSWindow *window;

@property (assign) IBOutlet NSTableView *tableView;

- (IBAction)tappity:(id)sender;
@end
