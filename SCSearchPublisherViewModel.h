//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, NSURL, SCActionModel;

@interface SCSearchPublisherViewModel : NSObject <NSCopying>
{
    _Bool _isTile;
    long long _subscribeState;
    NSString *_publisherName;
    NSString *_displayName;
    NSURL *_searchIconURL;
    NSAttributedString *_descriptionText;
    NSURL *_deeplinkUrl;
    NSString *_searchResultRankingId;
    SCActionModel *_singleTapActionModel;
    SCActionModel *_longPressActionModel;
    NSURL *_filledIconURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSURL *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(readonly, copy, nonatomic) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSURL *filledIconURL; // @synthesize filledIconURL=_filledIconURL;
- (unsigned long long)hash;
- (id)initWithSubscribeState:(long long)arg1 publisherName:(id)arg2 displayName:(id)arg3 searchIconURL:(id)arg4 descriptionText:(id)arg5 deeplinkUrl:(id)arg6 searchResultRankingId:(id)arg7 singleTapActionModel:(id)arg8 longPressActionModel:(id)arg9 isTile:(_Bool)arg10 filledIconURL:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isTile; // @synthesize isTile=_isTile;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, copy, nonatomic) NSURL *searchIconURL; // @synthesize searchIconURL=_searchIconURL;
@property(readonly, copy, nonatomic) NSString *searchResultRankingId; // @synthesize searchResultRankingId=_searchResultRankingId;
@property(readonly, copy, nonatomic) SCActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, nonatomic) long long subscribeState; // @synthesize subscribeState=_subscribeState;

@end

