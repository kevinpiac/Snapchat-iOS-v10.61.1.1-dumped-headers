//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FeatureProvidedSignals;

@interface SCPropertyHandler : NSObject
{
    FeatureProvidedSignals *_featureProvidedSignals;
}

- (void).cxx_destruct;
- (int)compareTo:(id)arg1;
- (int)compareToComparableValue:(id)arg1;
@property(readonly, nonatomic) FeatureProvidedSignals *featureProvidedSignals; // @synthesize featureProvidedSignals=_featureProvidedSignals;
- (id)initWithFeatureProvidedSignals:(id)arg1;
- (_Bool)isComparableWith:(id)arg1;
- (_Bool)isPropertyValid;
@property(readonly, nonatomic) id propertyValue;

@end

