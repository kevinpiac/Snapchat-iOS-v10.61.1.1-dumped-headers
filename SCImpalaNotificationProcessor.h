//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNotificationProcessor-Protocol.h"

@class SCUserSession;

@interface SCImpalaNotificationProcessor : NSObject <SCNotificationProcessor>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (void)processNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;

@end

