//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCLensLoggerConsumptionTrackingProviding;

@interface SCImageProcessLensCommandEffectLoaderFactory : NSObject
{
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
}

- (void).cxx_destruct;
- (id)effectLoaderWithLensEffectDescriptorContainer:(id)arg1;
- (id)initWithLensLogger:(id)arg1;

@end

