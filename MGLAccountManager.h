//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MGLAccountManager : NSObject
{
    NSString *_accessToken;
}

+ (id)accessToken;
+ (_Bool)mapboxMetricsEnabledSettingShownInApp;
+ (void)setAccessToken:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSString *accessToken; // @synthesize accessToken=_accessToken;

@end

