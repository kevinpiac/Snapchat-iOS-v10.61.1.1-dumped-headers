//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCLensExplorerEventsControllerConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _logImpressionsImmediately;
    _Bool _logImpressionsOnce;
    float _minimumVisibleFraction;
    float _minimumImpressionTimeInterval;
}

+ (id)longImpressionConfiguration;
+ (id)shortImpressionConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumVisibleFraction:(float)arg1 minimumImpressionTimeInterval:(float)arg2 logImpressionsImmediately:(_Bool)arg3 logImpressionsOnce:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool logImpressionsImmediately; // @synthesize logImpressionsImmediately=_logImpressionsImmediately;
@property(readonly, nonatomic) _Bool logImpressionsOnce; // @synthesize logImpressionsOnce=_logImpressionsOnce;
@property(readonly, nonatomic) float minimumImpressionTimeInterval; // @synthesize minimumImpressionTimeInterval=_minimumImpressionTimeInterval;
@property(readonly, nonatomic) float minimumVisibleFraction; // @synthesize minimumVisibleFraction=_minimumVisibleFraction;

@end

