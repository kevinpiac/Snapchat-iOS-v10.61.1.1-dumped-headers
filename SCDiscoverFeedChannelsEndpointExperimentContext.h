//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedChannelsEndpointExperimentContext : SCExperimentContext
{
    _Bool _enableVideoCatalogEndpoint;
    _Bool _enableAdVideoCatalogEndpoint;
    _Bool _enableEditionEndpoint;
}

@property(readonly, nonatomic) _Bool enableAdVideoCatalogEndpoint; // @synthesize enableAdVideoCatalogEndpoint=_enableAdVideoCatalogEndpoint;
@property(readonly, nonatomic) _Bool enableEditionEndpoint; // @synthesize enableEditionEndpoint=_enableEditionEndpoint;
@property(readonly, nonatomic) _Bool enableVideoCatalogEndpoint; // @synthesize enableVideoCatalogEndpoint=_enableVideoCatalogEndpoint;
- (id)experimentName;
- (void)setupParameters;

@end

