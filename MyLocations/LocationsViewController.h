//
//  LocationsViewController.h
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.
#import <UIKit/UIKit.h>

@interface LocationsViewController : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
