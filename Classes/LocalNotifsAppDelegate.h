//
//  LocalNotifsAppDelegate.h
//  LocalNotifs
//
//  Created by Mugunth Kumar on 9-Aug-10.
//  Copyright Steinlogic 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LocalNotifsViewController;

@interface LocalNotifsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    LocalNotifsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet LocalNotifsViewController *viewController;

@end

