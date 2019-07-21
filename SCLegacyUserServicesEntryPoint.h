//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSnapProServices, SCUserSessionScope;

@interface SCLegacyUserServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCSnapProServices *_snapProServices;
    SCServicesExposer *_snapchatterServicesExposer;
    SCServicesExposer *_cameraServicesExposer;
    SCServicesExposer *_legacyNotificationSettingsServicesExposer;
    SCServicesExposer *_legacyFeedHeaderPromptStateServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *cameraServicesExposer; // @synthesize cameraServicesExposer=_cameraServicesExposer;
@property(retain, nonatomic) SCServicesExposer *legacyFeedHeaderPromptStateServicesExposer; // @synthesize legacyFeedHeaderPromptStateServicesExposer=_legacyFeedHeaderPromptStateServicesExposer;
@property(retain, nonatomic) SCServicesExposer *legacyNotificationSettingsServicesExposer; // @synthesize legacyNotificationSettingsServicesExposer=_legacyNotificationSettingsServicesExposer;
@property(nonatomic) __weak SCSnapProServices *snapProServices; // @synthesize snapProServices=_snapProServices;
@property(retain, nonatomic) SCServicesExposer *snapchatterServicesExposer; // @synthesize snapchatterServicesExposer=_snapchatterServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

