//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLensEffectActivatorConfiguration;

@interface SCLensEffectActivatorConfigurationLoader : NSObject
{
    SCLensEffectActivatorConfiguration *_configuration;
    CDUnknownBlockType _delayedLoadingBlock;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 delayedLoadingBlock:(CDUnknownBlockType)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;

@end

