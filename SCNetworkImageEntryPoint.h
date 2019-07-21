//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContentDeliveryServices, SCServicesExposer, SCStoriesServices, SCUserSessionScope;

@interface SCNetworkImageEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCStoriesServices *_storiesServices;
    SCServicesExposer *_networkImageServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(retain, nonatomic) SCServicesExposer *networkImageServicesExposer; // @synthesize networkImageServicesExposer=_networkImageServicesExposer;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end
