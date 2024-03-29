//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedWhiteSpaceImageWithTextViewModel;

@interface SCDiscoverFeedWhiteSpaceImageWithTextCellViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedWhiteSpaceImageWithTextViewModel *_imageWithTextViewModel;
    SCActionModel *_singleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceImageWithTextViewModel *imageWithTextViewModel; // @synthesize imageWithTextViewModel=_imageWithTextViewModel;
- (id)initWithImageWithTextViewModel:(id)arg1 singleTapActionModel:(id)arg2 longPressActionModel:(id)arg3 scrollOutOfScreenActionModel:(id)arg4 storyLoggingInfo:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *scrollOutOfScreenActionModel; // @synthesize scrollOutOfScreenActionModel=_scrollOutOfScreenActionModel;
@property(readonly, copy, nonatomic) SCActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;

@end

