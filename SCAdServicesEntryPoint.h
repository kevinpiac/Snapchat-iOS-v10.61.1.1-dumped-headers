//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContentDeliveryServices, SCServicesExposer, SCUserSessionScope;

@interface SCAdServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCServicesExposer *_adServicesExposer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCServicesExposer *adServicesExposer; // @synthesize adServicesExposer=_adServicesExposer;
- (void)begin;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
- (id)end;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

