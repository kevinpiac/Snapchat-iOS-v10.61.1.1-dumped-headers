//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUScannableAction-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUScannableActionAdCreativePreview <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) NSNumber *createdTimestampInMillis;
@property(readonly, copy, nonatomic) NSString *entityId;
@property(readonly, copy, nonatomic) NSString *entityType;
@property(readonly, copy, nonatomic) NSNumber *isActionExpirable;
@property(readonly, copy, nonatomic) NSNumber *ttlInMillis;
@end

