//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCKGrams : NSObject
{
    NSMutableDictionary *_multiSet;
    long long _gramCount;
    long long _gramSize;
}

- (void).cxx_destruct;
- (_Bool)_isValidGram:(id)arg1;
@property(readonly, nonatomic) long long gramSize; // @synthesize gramSize=_gramSize;
- (id)initWithString:(id)arg1 gramSize:(long long)arg2;
- (long long)multiplicityForGram:(id)arg1;
- (double)normalizedMultiplicityForGram:(id)arg1;

@end

