//
//  TableViewController.h
//  quiz5
//
//  Created by Rachel Johnson on 3/15/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController<UITableViewDataSource,UITableViewDelegate>

@property NSMutableArray *tasks;

@end
