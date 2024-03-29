//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCActionModel;

@interface SCStoryManagementSnapInfoCellViewModel : NSObject <NSCopying>
{
    NSArray *_viewerCellViewModels;
    long long _uploadStatus;
    SCActionModel *_tapRetryPostingActionModel;
    long long _viewCount;
    long long _viewerListType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithViewerCellViewModels:(id)arg1 uploadStatus:(long long)arg2 tapRetryPostingActionModel:(id)arg3 viewCount:(long long)arg4 viewerListType:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *tapRetryPostingActionModel; // @synthesize tapRetryPostingActionModel=_tapRetryPostingActionModel;
@property(readonly, nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(readonly, nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(readonly, copy, nonatomic) NSArray *viewerCellViewModels; // @synthesize viewerCellViewModels=_viewerCellViewModels;
@property(readonly, nonatomic) long long viewerListType; // @synthesize viewerListType=_viewerListType;

@end

