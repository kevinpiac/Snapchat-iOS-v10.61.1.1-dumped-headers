//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCircumstanceEngine;

@interface SCAdaptiveVideoTranscodingConfigurationParser : NSObject
{
    SCCircumstanceEngine *_circumstanceEngine;
}

- (void).cxx_destruct;
- (id)_createDefaultConfigurationForMediaQualityLevel:(long long)arg1;
@property(retain, nonatomic) SCCircumstanceEngine *circumstanceEngine; // @synthesize circumstanceEngine=_circumstanceEngine;
- (id)configurationForMediaQualityLevel:(long long)arg1;
- (id)levelToConfigurationKeyMap;
- (id)levelToDefaultConfigurationMap;

@end

