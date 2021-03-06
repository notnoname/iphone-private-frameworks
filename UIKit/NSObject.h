/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@interface NSObject (UIKitAccessibilityInterfaceBuilderSupport)
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface NSObject (UIAccessibilityPrivate)
-(void)accessibilitySetIdentification:(id)identification;
-(void)_accessibilityFinalize;
@end

@interface NSObject (UITextRangeViewScrollerSupport)
-(void)_enableScrollingIfNecessary;
-(void)_disableScrollingIfNecessary;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@interface NSObject (UITextInput_Internal)
-(id)_selectableText;
-(NSRange)_selectionAsNSRange;
-(int)_indexForTextPosition:(id)textPosition;
-(NSRange)_nsrangeForTextRange:(id)textRange;
-(unsigned short)_characterAfterCaretSelection;
-(unsigned short)_characterBeforeCaretSelection;
-(unsigned short)_characterInRelationToCaretSelection:(int)caretSelection;
-(unsigned short)_characterInRelationToRangedSelection:(int)rangedSelection;
-(id)_wordContainingCaretSelection;
-(id)_fullText;
-(BOOL)_selectionAtWordStart;
-(BOOL)_selectionAtDocumentStart;
-(BOOL)_selectionAtDocumentEnd;
-(BOOL)_isEmptySelection;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_extendCurrentSelection:(int)selection;
-(void)_moveCurrentSelection:(int)selection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_replaceCurrentWordWithText:(id)text;
-(CGRect)_rectContainingCaretSelection;
-(CGRect)_lastRectForRange:(id)range;
-(void)_scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;
-(id)_rangeOfEnclosingWord:(id)enclosingWord;
-(id)_clampedpositionFromPosition:(id)position offset:(int)offset;
-(id)_textColorForCaretSelection;
-(id)_fontForCaretSelection;
-(void)_updateSelectionWithTextRange:(id)textRange;
-(id)_setSelectionRangeWithHistory:(id)history;
-(id)_setHistory:(id)history withExtending:(BOOL)extending withAnchor:(int)anchor;
-(id)_moveToStartOfWord:(BOOL)word withHistory:(id)history;
-(id)_moveToEndOfWord:(BOOL)word withHistory:(id)history;
-(id)_moveToStartOfLine:(BOOL)line withHistory:(id)history;
-(id)_moveToEndOfLine:(BOOL)line withHistory:(id)history;
-(id)_moveToStartOfParagraph:(BOOL)paragraph withHistory:(id)history;
-(id)_moveToEndOfParagraph:(BOOL)paragraph withHistory:(id)history;
-(id)_moveToStartOfDocument:(BOOL)document withHistory:(id)history;
-(id)_moveToEndOfDocument:(BOOL)document withHistory:(id)history;
-(id)_moveUp:(BOOL)up withHistory:(id)history;
-(id)_moveDown:(BOOL)down withHistory:(id)history;
-(id)_moveLeft:(BOOL)left withHistory:(id)history;
-(id)_moveRight:(BOOL)right withHistory:(id)history;
@end
#endif
