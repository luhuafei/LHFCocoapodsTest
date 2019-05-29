//
//  NSObject+Swizzling.h
//  iPhoneX
//
//  Created by DengTianran on 2017/8/21.
//  Copyright © 2017年 LHF. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Swizzling)

+ (BOOL)hf_swizzleMethod:(SEL)origSel withMethod:(SEL)altSel;

+ (BOOL)hf_swizzleClassMethod:(SEL)origSel withMethod:(SEL)altSel;

@end
