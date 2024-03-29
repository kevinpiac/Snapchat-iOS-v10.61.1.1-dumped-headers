//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureProvider, UIView;

@interface SCFeatureCoordinator : NSObject
{
    UIView *_containerView;
    SCFeatureProvider *_provider;
}

- (void).cxx_destruct;
- (void)_loadFeatures;
- (void)activateFeatures;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (unsigned long long)handleInteractionEvent:(id)arg1;
- (id)initWithFeatureContainerView:(id)arg1 provider:(id)arg2;
@property(retain, nonatomic) SCFeatureProvider *provider; // @synthesize provider=_provider;
- (void)reloadFeatures;
- (_Bool)shouldBlockInteractionEvent:(id)arg1;

@end

