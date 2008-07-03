//
//  ScanViewController.h
//  ZXing
//
//  Created by Christian Brunschen on 24/06/2008.
//  Copyright 2008 Google Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Scan.h"
#import "ParsedResult.h"

@interface ScanViewController : UITableViewController {
  IBOutlet ParsedResult *result;
  IBOutlet Scan *scan;
  UIFont *bodyFont;
  NSDateFormatter *dateFormatter;
}

@property (nonatomic, retain) ParsedResult *result;
@property (nonatomic, retain) Scan *scan;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;

- (id)initWithResult:(ParsedResult *)r forScan:(Scan *)s;

@end