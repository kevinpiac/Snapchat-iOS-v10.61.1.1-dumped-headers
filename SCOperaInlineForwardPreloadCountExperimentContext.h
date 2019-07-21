//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCOperaInlineForwardPreloadCountExperimentContext : SCExperimentContext
{
    _Bool _loadGroupsUsingInlinePrefetcher;
    unsigned long long _preloadCountUnderWifi;
    unsigned long long _preloadCountDefault;
    unsigned long long _preloadGroupsCount;
    unsigned long long _preloadPagesInAGroupCount;
}

- (id)experimentName;
@property(readonly, nonatomic) _Bool loadGroupsUsingInlinePrefetcher; // @synthesize loadGroupsUsingInlinePrefetcher=_loadGroupsUsingInlinePrefetcher;
@property(readonly, nonatomic) unsigned long long preloadCountDefault; // @synthesize preloadCountDefault=_preloadCountDefault;
@property(readonly, nonatomic) unsigned long long preloadCountUnderWifi; // @synthesize preloadCountUnderWifi=_preloadCountUnderWifi;
@property(readonly, nonatomic) unsigned long long preloadGroupsCount; // @synthesize preloadGroupsCount=_preloadGroupsCount;
@property(readonly, nonatomic) unsigned long long preloadPagesInAGroupCount; // @synthesize preloadPagesInAGroupCount=_preloadPagesInAGroupCount;
- (void)setupParameters;

@end

