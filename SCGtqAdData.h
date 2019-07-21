//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnlockablesAdRequestProvider-Protocol.h"

@class SCAdsAdRequest, SCSnapAdsApplicationInfo, SCSnapchatAdsDebugSettingsAdapter, SCSnapchatAdsDeviceAdapter;

@interface SCGtqAdData : NSObject <SCUnlockablesAdRequestProvider>
{
    SCSnapchatAdsDeviceAdapter *_deviceAdapter;
    SCSnapchatAdsDebugSettingsAdapter *_debugSettings;
    SCSnapAdsApplicationInfo *_applicationInfo;
}

- (void).cxx_destruct;
- (id)_adsUser;
- (int)_connectionType;
- (id)_encryptedUserData;
- (id)_idfa;
- (id)_osVersion;
- (id)_sojuPreferences;
- (id)adPreferences;
@property(readonly, nonatomic) SCAdsAdRequest *adRequest;
- (id)adsDevice;
- (id)application;
- (id)init;
- (id)network;

@end

