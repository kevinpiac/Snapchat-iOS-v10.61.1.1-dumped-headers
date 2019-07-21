//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCImpressionItem-Protocol.h"

@class NSNumber, NSString;

@interface SCDiscoverFeedOnboardingLoggingData : NSObject <SCImpressionItem, NSCopying, NSCoding>
{
    NSString *_itemId;
    NSNumber *_itemType;
    NSNumber *_itemPos;
    NSString *_tileId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)impressionIdentifier;
- (id)impressionInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemId:(id)arg1 itemType:(id)arg2 itemPos:(id)arg3 tileId:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, copy, nonatomic) NSNumber *itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, copy, nonatomic) NSNumber *itemType; // @synthesize itemType=_itemType;
- (_Bool)shouldAlwaysTriggerImpression;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
