//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCMainCameraViewControllerLifecycleEvent : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)viewCanAppear;
+ (id)viewDidFullyAppear;
+ (id)viewDidFullyDisappear;
+ (id)viewDidPartiallyAppear;
+ (id)viewDidPartiallyDisappear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchViewCanAppear:(CDUnknownBlockType)arg1 viewDidFullyAppear:(CDUnknownBlockType)arg2 viewDidFullyDisappear:(CDUnknownBlockType)arg3 viewDidPartiallyAppear:(CDUnknownBlockType)arg4 viewDidPartiallyDisappear:(CDUnknownBlockType)arg5;

@end

