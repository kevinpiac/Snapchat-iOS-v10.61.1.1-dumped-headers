//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCommerceSession.h"

@class NSString;

@interface SCCommerceDiscoverSession : SCCommerceSession
{
    NSString *_discoverEditionId;
    NSString *_discoverEditionSessionId;
    NSString *_discoverPublisherId;
    NSString *_discoverSnapId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *discoverEditionId; // @synthesize discoverEditionId=_discoverEditionId;
@property(retain, nonatomic) NSString *discoverEditionSessionId; // @synthesize discoverEditionSessionId=_discoverEditionSessionId;
@property(retain, nonatomic) NSString *discoverPublisherId; // @synthesize discoverPublisherId=_discoverPublisherId;
@property(retain, nonatomic) NSString *discoverSnapId; // @synthesize discoverSnapId=_discoverSnapId;
- (id)initWithOriginType:(long long)arg1 source:(long long)arg2 productId:(id)arg3 editionId:(id)arg4 discoverSessionId:(id)arg5 publisherId:(id)arg6 snapId:(id)arg7;
- (void)populateBasePropertiesForEvent:(id)arg1;

@end

