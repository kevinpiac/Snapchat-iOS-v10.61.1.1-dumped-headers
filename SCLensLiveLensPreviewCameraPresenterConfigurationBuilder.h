//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLensLiveLensPreviewCameraPresenterConfigurationBuilder : NSObject
{
    long long _snapSource;
    long long _roleType;
    _Bool _isLensChallenges;
}

+ (id)lensExplorerLiveLensPreviewCameraPresenterConfiguration;
+ (id)lensExplorerLiveLensPreviewCameraPresenterConfigurationFromExistingLensExplorerLiveLensPreviewCameraPresenterConfiguration:(id)arg1;
- (id)build;
- (id)withIsLensChallenges:(_Bool)arg1;
- (id)withRoleType:(long long)arg1;
- (id)withSnapSource:(long long)arg1;

@end

