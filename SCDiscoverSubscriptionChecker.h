//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaSubscriptionChecker-Protocol.h"

@class NSString, SCDiscoverChannel;

@interface SCDiscoverSubscriptionChecker : NSObject <SCOperaSubscriptionChecker>
{
    SCDiscoverChannel *_channel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCDiscoverChannel *channel; // @synthesize channel=_channel;
- (id)initWithChannel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldAllowSubscription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
