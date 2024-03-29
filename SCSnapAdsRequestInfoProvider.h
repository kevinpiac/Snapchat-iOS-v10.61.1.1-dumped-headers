//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapAdsApplicationInfo;
@protocol SCSnapAdsDeviceAdapter, SCSnapAdsNetworkUserAgentAdapter, SCSnapAdsUserInfoAdapter;

@interface SCSnapAdsRequestInfoProvider : NSObject
{
    id <SCSnapAdsUserInfoAdapter> _userInfoAdapter;
    id <SCSnapAdsNetworkUserAgentAdapter> _userAgentAdapter;
    SCSnapAdsApplicationInfo *_applicationInfo;
    id <SCSnapAdsDeviceAdapter> _deviceAdapter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCSnapAdsApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, nonatomic) __weak id <SCSnapAdsDeviceAdapter> deviceAdapter; // @synthesize deviceAdapter=_deviceAdapter;
- (id)initUserInfoAdapter:(id)arg1 userAgentAdapter:(id)arg2 applicationInfo:(id)arg3 deviceAdapter:(id)arg4;
@property(readonly, nonatomic) __weak id <SCSnapAdsNetworkUserAgentAdapter> userAgentAdapter; // @synthesize userAgentAdapter=_userAgentAdapter;
@property(readonly, nonatomic) __weak id <SCSnapAdsUserInfoAdapter> userInfoAdapter; // @synthesize userInfoAdapter=_userInfoAdapter;

@end

