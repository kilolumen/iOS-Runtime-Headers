/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewDataSource>, <EKDayViewDelegate>, EKDayView, EKPadDayAllDayView, NSArray, NSDate, UIView;

@interface EKPadDayView : UIView <EKDayViewDelegate, EKPadAllDayViewDelegate, EKPadAllDayViewDataSource, EKDayViewProtocol, EKDayViewDataSource> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    EKPadDayAllDayView *_allDayView;
    UIView *_bottomFader;
    <EKDayViewDataSource> *_dataSource;
    <EKDayViewDelegate> *_delegate;
    BOOL _dimsNonSelectedItems;
    } _layedOutOccurrencesForBounds;
    EKDayView *_timedView;
    UIView *_topFader;
}

@property BOOL allowsOccurrenceSelection;
@property <EKDayViewDataSource> * dataSource;
@property <EKDayViewDelegate> * delegate;
@property BOOL dimsNonSelectedItems;
@property unsigned int firstVisibleSecond;
@property(readonly) NSArray * occurrenceViews;
@property(copy) NSDate * selectedDate;
@property struct { int year; BOOL month; BOOL day; BOOL hour; BOOL minute; double second; } selectedDateGr;

- (id)_faderForFaderImage:(id)arg1 fader:(id)arg2 sizeToImage:(BOOL)arg3;
- (void)_notifyDelegateOfDragExitedOnOccurrence:(id)arg1;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (void)_notifyDelegateOfPressOnEvent:(id)arg1;
- (void)_resetOccurrences;
- (BOOL)allowsOccurrenceSelection;
- (void)bringEventToFront:(id)arg1;
- (id)dataSource;
- (void)dayView:(id)arg1 didClickOnEvent:(id)arg2;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayView:(id)arg1 didPressOnEvent:(id)arg2;
- (void)dayView:(id)arg1 didSelectItemAtPath:(id)arg2;
- (void)dayView:(id)arg1 dragExitedEvent:(id)arg2;
- (double)dayView:(id)arg1 durationForItemPath:(id)arg2;
- (id)dayView:(id)arg1 endDateForItemPath:(id)arg2;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned int)arg2;
- (unsigned int)dayView:(id)arg1 numberOfEventsInSection:(int)arg2;
- (id)dayView:(id)arg1 occurrenceViewForItemPath:(id)arg2;
- (id)dayView:(id)arg1 startDateForItemPath:(id)arg2;
- (void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)dimsNonSelectedItems;
- (unsigned int)firstVisibleSecond;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 scrollbarShowsInside:(BOOL)arg4;
- (void)layoutSubviews;
- (unsigned int)numberOfEventsInPadAllDayView:(id)arg1;
- (id)occurrenceViews;
- (id)occurrenceVisibleRect:(id)arg1;
- (void)padAllDayView:(id)arg1 didSelectItemWithEventIndex:(unsigned int)arg2;
- (id)padAllDayView:(id)arg1 endDateForEventAtIndex:(unsigned int)arg2;
- (void)padAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3;
- (void)padAllDayView:(id)arg1 occurrenceDragExited:(id)arg2;
- (void)padAllDayView:(id)arg1 occurrencePressed:(id)arg2 onDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3;
- (id)padAllDayView:(id)arg1 occurrenceViewForEventAtIndex:(unsigned int)arg2;
- (id)padAllDayView:(id)arg1 startDateForEventAtIndex:(unsigned int)arg2;
- (void)padAllDayViewEmptySpaceClick:(id)arg1 onDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2;
- (void)padAllDayViewFinishScrollingToOccurrence:(id)arg1;
- (void)padAllDayViewStartDrag:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForItemAtPath:(id)arg1;
- (void)reloadData;
- (void)resetLastSelectedOccurrencePoint;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToOccurrence:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemAtPath:(id)arg1;
- (id)selectedDate;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })selectedDateGr;
- (id)selectedItem;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setFirstVisibleSecond:(unsigned int)arg1;
- (void)setOutlineStyle:(int)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedDateGr:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setTopFader:(id)arg1 bottomFader:(id)arg2 sizeToImage:(BOOL)arg3;
- (id)viewForItemAtPath:(id)arg1;

@end