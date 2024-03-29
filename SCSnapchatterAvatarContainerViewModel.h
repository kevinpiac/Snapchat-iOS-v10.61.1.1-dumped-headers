//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel, SCAvatarViewModel, UIColor;

@interface SCSnapchatterAvatarContainerViewModel : NSObject <NSCopying>
{
    SCAvatarViewModel *_avatarViewModel;
    UIColor *_backgroundColor;
    SCActionModel *_avatarTapActionModel;
    struct CGSize _thumbnailSize;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *avatarTapActionModel; // @synthesize avatarTapActionModel=_avatarTapActionModel;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAvatarViewModel:(id)arg1 thumbnailSize:(struct CGSize)arg2 contentInsets:(struct UIEdgeInsets)arg3 backgroundColor:(id)arg4 avatarTapActionModel:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;

@end

