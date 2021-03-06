//
//  ModelController.h
//  Earn-Your-Metals
//
//  Created by SZP on 9/23/13.
//  Copyright (c) 2013 iPlutoid. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
