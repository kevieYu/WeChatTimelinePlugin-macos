//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (BlockMonitor)
+ (void)swizzleClassMethod:(SEL)arg1 tarSel:(SEL)arg2;
+ (void)swizzleInstanceMethod:(Class)arg1 srcSel:(SEL)arg2 tarClass:(Class)arg3 tarSel:(SEL)arg4;
+ (void)swizzleInstanceMethod:(SEL)arg1 tarClass:(id)arg2 tarSel:(SEL)arg3;
+ (void)swizzleMethod:(SEL)arg1 tarSel:(SEL)arg2;
+ (void)load;
- (void)Source0PerformIntercepter:(id)arg1;
- (void)bm_performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)bm_performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)bm_performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)bm_performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4;
- (void)bm_performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)bm_performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
@end

