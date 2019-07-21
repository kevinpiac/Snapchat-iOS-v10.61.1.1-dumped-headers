//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCCommerceBitmojiOptions : NSObject <NSCopying>
{
    NSArray *_userModels;
    NSString *_solomojiTemplateId;
    NSString *_friendmojiTemplateId;
}

- (void).cxx_destruct;
- (id)activeTemplateId;
- (id)avatarIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *friendmojiTemplateId; // @synthesize friendmojiTemplateId=_friendmojiTemplateId;
- (unsigned long long)hash;
- (id)imageParams;
- (id)initWithUserModels:(id)arg1 solomojiTemplateId:(id)arg2 friendmojiTemplateId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *solomojiTemplateId; // @synthesize solomojiTemplateId=_solomojiTemplateId;
@property(readonly, copy, nonatomic) NSArray *userModels; // @synthesize userModels=_userModels;

@end

