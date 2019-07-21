//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, SCDiscoverChannels;

@interface SCDiscoverChannelsModel : NSObject <NSCoding>
{
    SCDiscoverChannels *_discoverChannels;
    NSString *_discoverVideoCatalogEndpoint;
    NSString *_discoverAdVideoCatalogEndpoint;
    NSString *_discoverEditionEndpointString;
}

- (void).cxx_destruct;
- (void)_setupCommonParams;
- (void)didDecodeObject;
@property(readonly, copy, nonatomic) NSString *discoverAdVideoCatalogEndpoint; // @synthesize discoverAdVideoCatalogEndpoint=_discoverAdVideoCatalogEndpoint;
@property(readonly, nonatomic) SCDiscoverChannels *discoverChannels; // @synthesize discoverChannels=_discoverChannels;
@property(readonly, copy, nonatomic) NSString *discoverEditionEndpointString; // @synthesize discoverEditionEndpointString=_discoverEditionEndpointString;
@property(readonly, copy, nonatomic) NSString *discoverVideoCatalogEndpoint; // @synthesize discoverVideoCatalogEndpoint=_discoverVideoCatalogEndpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoverChannels:(id)arg1 discoverVideoCatalogEndpoint:(id)arg2 discoverAdVideoCatalogEndpoint:(id)arg3 discoverEditionEndpointString:(id)arg4;

@end
