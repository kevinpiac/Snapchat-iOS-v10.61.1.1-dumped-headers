//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCCommerceProductDetailsBitmojiComicViewModel;

@interface SCCommerceProductDetailsBitmojiViewModel : NSObject <NSCopying>
{
    _Bool _userHasNoBitmoji;
    NSArray *_avatars;
    SCCommerceProductDetailsBitmojiComicViewModel *_comic;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(readonly, copy, nonatomic) SCCommerceProductDetailsBitmojiComicViewModel *comic; // @synthesize comic=_comic;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAvatars:(id)arg1 comic:(id)arg2 userHasNoBitmoji:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool userHasNoBitmoji; // @synthesize userHasNoBitmoji=_userHasNoBitmoji;

@end

