//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@interface SCBlockBasedFeatureInitializer : SCFeatureInitializer
{
    CDUnknownBlockType _initializationBlock;
    CDUnknownBlockType _enabledBlock;
}

- (void).cxx_destruct;
- (id)createInstance;
- (_Bool)enabled;
@property(copy, nonatomic) CDUnknownBlockType enabledBlock; // @synthesize enabledBlock=_enabledBlock;
- (id)initWithIntializationBlock:(CDUnknownBlockType)arg1 enabledBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType initializationBlock; // @synthesize initializationBlock=_initializationBlock;

@end

