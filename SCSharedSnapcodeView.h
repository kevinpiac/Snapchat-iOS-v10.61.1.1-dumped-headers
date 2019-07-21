//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SVGDocumentView, UIImageView, UILabel;

@interface SCSharedSnapcodeView : UIView
{
    UIView *_snapcodeContainer;
    SVGDocumentView *_snapcodeView;
    UIImageView *_imageView;
    UILabel *_usernameLabel;
    UILabel *_snapToAddLabel;
}

+ (id)createSharedSnapcodeViewWithSnapcode:(id)arg1 username:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *snapToAddLabel; // @synthesize snapToAddLabel=_snapToAddLabel;
@property(retain, nonatomic) UIView *snapcodeContainer; // @synthesize snapcodeContainer=_snapcodeContainer;
@property(retain, nonatomic) SVGDocumentView *snapcodeView; // @synthesize snapcodeView=_snapcodeView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
- (void)updateBitmojiImage:(id)arg1;
- (void)updateProfileImage:(id)arg1;
- (void)updateSnapcode:(id)arg1 username:(id)arg2;

@end
