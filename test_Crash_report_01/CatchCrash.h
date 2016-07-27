//
//  CatchCrash.h
//  test_Crash_report_01
//  Created by jeffasd on 16/7/27.
//  Copyright © 2016年 jeffasd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CatchCrash : NSObject

void uncaughtExceptionHandler(NSException *exception);

@end
