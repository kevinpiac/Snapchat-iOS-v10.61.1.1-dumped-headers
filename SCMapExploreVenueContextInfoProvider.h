//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2ContextInfoProvider-Protocol.h"

@class NSString;

@interface SCMapExploreVenueContextInfoProvider : NSObject <SCContextV2ContextInfoProvider>
{
    NSString *_placeId;
}

- (void).cxx_destruct;
- (id)initWithPlaceId:(id)arg1;
- (_Bool)replyChatEnabled;
- (id)replyUsername;
- (id)snapContextInfo;
- (id)snapIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

