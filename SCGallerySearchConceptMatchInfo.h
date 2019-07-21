//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCGallerySearchConceptMatchInfo : NSObject
{
    NSString *_snapId;
    NSString *_concept;
    long long _resultMatchType;
    double _confidence;
}

+ (id)intersectBySnapIdsWithMatchInfos:(id)arg1 andMatchInfos:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *concept; // @synthesize concept=_concept;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
- (id)description;
- (id)initWithSnapId:(id)arg1 concept:(id)arg2 resultMatchType:(long long)arg3 confidence:(double)arg4;
@property(readonly, nonatomic) long long resultMatchType; // @synthesize resultMatchType=_resultMatchType;
@property(readonly, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;

@end

