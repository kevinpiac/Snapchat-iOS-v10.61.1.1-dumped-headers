//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkInterceptor-Protocol.h"

@class NSString;

@interface SCNetworkClientDeprecationInterceptor : NSObject <SCNetworkInterceptor>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasAllFieldRequiredForDeprecation:(id)arg1;
- (void)interceptWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (_Bool)isReadyToShowNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

