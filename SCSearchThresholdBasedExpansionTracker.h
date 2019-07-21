//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSearchThresholdBasedExpansionTracker : NSObject <NSCopying>
{
    unsigned long long _minimumThreshold;
    unsigned long long _maximumThreshold;
    unsigned long long _incrementThreshold;
    _Bool _hasMoreElements;
    unsigned long long _numberOfExpansions;
    unsigned long long _numberOfAllElements;
    unsigned long long _numberOfExpandedElements;
}

- (unsigned long long)_numberOfExpandedElementsWithNumberOfAllElements:(unsigned long long)arg1 numberOfExpansions:(unsigned long long)arg2;
- (void)_updateStatusWithNumberOfElements;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool hasMoreElements; // @synthesize hasMoreElements=_hasMoreElements;
- (id)initWithMinimumThreshold:(unsigned long long)arg1 maximumThreshold:(unsigned long long)arg2 incrementThreshold:(unsigned long long)arg3;
@property(nonatomic) unsigned long long numberOfAllElements; // @synthesize numberOfAllElements=_numberOfAllElements;
@property(nonatomic) unsigned long long numberOfExpandedElements; // @synthesize numberOfExpandedElements=_numberOfExpandedElements;
- (unsigned long long)numberOfExpandedElementsWithNumberOfAllElements:(unsigned long long)arg1 numberOfExpansions:(unsigned long long)arg2;
- (unsigned long long)numberOfExpandedElementsWithNumberOfExpansions:(unsigned long long)arg1;
@property(nonatomic) unsigned long long numberOfExpansions; // @synthesize numberOfExpansions=_numberOfExpansions;
- (unsigned long long)numberOfExpansionsWithOneMoreExpansion:(_Bool)arg1;
- (void)setNumberOfAllElements:(unsigned long long)arg1 shouldResetExpansion:(_Bool)arg2;

@end

