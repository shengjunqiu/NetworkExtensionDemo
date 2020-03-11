//
//  AppDelegate.h
//  NEDemo
//
//  Created by 邱圣军 on 2020/3/11.
//  Copyright © 2020 ATCG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

