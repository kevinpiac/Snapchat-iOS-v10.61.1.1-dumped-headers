//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString, SCCSubscriptionEntityID;

@interface SCCSubscription : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _isSubscribed;
    _Bool _isSubscribedToNotifications;
    _Bool _isHidden;
    SCCSubscriptionEntityID *_entityID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SCCSubscriptionEntityID *entityID; // @synthesize entityID=_entityID;
- (id)initWithEntityID:(id)arg1 isSubscribed:(_Bool)arg2 isSubscribedToNotifications:(_Bool)arg3 isHidden:(_Bool)arg4;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) _Bool isSubscribedToNotifications; // @synthesize isSubscribedToNotifications=_isSubscribedToNotifications;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

