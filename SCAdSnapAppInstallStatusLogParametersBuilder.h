//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCAdSnapAppInstallStatusLogParametersBuilder : NSObject
{
    _Bool _appInstallLoadedOnEntry;
    _Bool _appInstallLoadedOnExit;
    double _appInstallVisiblePageLoadTimeInSec;
}

+ (id)adSnapAppInstallStatusLogParameters;
+ (id)adSnapAppInstallStatusLogParametersFromExistingAdSnapAppInstallStatusLogParameters:(id)arg1;
- (id)build;
- (id)withAppInstallLoadedOnEntry:(_Bool)arg1;
- (id)withAppInstallLoadedOnExit:(_Bool)arg1;
- (id)withAppInstallVisiblePageLoadTimeInSec:(double)arg1;

@end

